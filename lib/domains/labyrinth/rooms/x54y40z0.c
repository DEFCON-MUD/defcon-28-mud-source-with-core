inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 40, 0 }));
  set_short( "Hallway - x54y40z0" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y40z0.c",
  "east" : DIR+"/rooms/x55y40z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
