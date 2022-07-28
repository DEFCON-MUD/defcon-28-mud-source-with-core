inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 11, 7 }));
  set_short( "Hallway - x53y11z7" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y12z7.c",
  "south" : DIR+"/rooms/x53y10z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
