inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 32, 0 }));
  set_short( "Hallway - x17y32z0" );
set_objects( DIR+"/npc/gorilla.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y32z0.c",
  "north" : DIR+"/rooms/x17y33z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
