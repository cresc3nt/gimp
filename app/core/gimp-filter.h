/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimp-filter.h
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef __GIMP__FILTER_H__
#define __GIMP__FILTER_H__


gint            gimp_filter_history_size   (Gimp          *gimp);
gint            gimp_filter_history_length (Gimp          *gimp);
GimpProcedure * gimp_filter_history_nth    (Gimp          *gimp,
                                            gint           n);
void            gimp_filter_history_add    (Gimp          *gimp,
                                            GimpProcedure *procedure);
void            gimp_filter_history_remove (Gimp          *gimp,
                                            GimpProcedure *procedure);
void            gimp_filter_history_clear  (Gimp          *gimp);

void            gimp_filter_gegl_ops_add   (Gimp          *gimp,
                                            const gchar   *action_name,
                                            const gchar   *op_name);
const gchar   * gimp_filter_gegl_ops_get   (Gimp          *gimp,
                                            const gchar   *action_name);
GList         * gimp_filter_gegl_ops_list  (Gimp *gimp);


#endif /* __GIMP__FILTER_H__ */