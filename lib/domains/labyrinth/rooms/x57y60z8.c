inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 8 }));
  set_short( "Corridor - x57y60z8" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y60z8.c",
  "north" : DIR+"/rooms/x57y61z8.c",
  "south" : DIR+"/rooms/x57y59z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
