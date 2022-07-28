inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 42, 0 }));
  set_short( "Hallway - x17y42z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y42z0.c",
  "east" : DIR+"/rooms/x18y42z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
