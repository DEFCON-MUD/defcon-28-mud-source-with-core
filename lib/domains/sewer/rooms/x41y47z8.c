inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 47, 8 }));
  set_short( "Corridor - x41y47z8" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y48z8.c",
  "south" : DIR+"/rooms/x41y46z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
