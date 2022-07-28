inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 9 }));
  set_short( "Hallway - x23y22z9" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z9.c",
  "east" : DIR+"/rooms/x24y22z9.c",
  "north" : DIR+"/rooms/x23y23z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
