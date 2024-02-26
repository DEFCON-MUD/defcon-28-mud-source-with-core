inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 4 }));
  set_short( "Corridor - x45y22z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y22z4.c",
  "north" : DIR+"/rooms/x45y23z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
