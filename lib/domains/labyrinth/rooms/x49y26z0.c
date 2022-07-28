inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 26, 0 }));
  set_short( "Corridor - x49y26z0" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y26z0.c",
  "south" : DIR+"/rooms/x49y25z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
