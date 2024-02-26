inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 37, 4 }));
  set_short( "Corridor - x41y37z4" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y38z4.c",
  "south" : DIR+"/rooms/x41y36z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
