inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 50, 9 }));
  set_short( "Corridor - x9y50z9" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y50z9.c",
  "north" : DIR+"/rooms/x9y51z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
