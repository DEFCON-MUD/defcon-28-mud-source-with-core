inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 5 }));
  set_short( "Corridor - x53y42z5" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y42z5.c",
  "north" : DIR+"/rooms/x53y43z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
