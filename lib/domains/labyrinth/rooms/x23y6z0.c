inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 0 }));
  set_short( "Corridor - x23y6z0" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y6z0.c",
  "south" : DIR+"/rooms/x23y5z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
