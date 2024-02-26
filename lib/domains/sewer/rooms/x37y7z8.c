inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 7, 8 }));
  set_short( "Hallway - x37y7z8" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y8z8.c",
  "south" : DIR+"/rooms/x37y6z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
