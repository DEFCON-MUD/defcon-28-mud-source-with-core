inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 36, 5 }));
  set_short( "Corridor - x55y36z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y36z5.c",
  "north" : DIR+"/rooms/x55y37z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
