inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 8, 4 }));
  set_short( "Corridor - x57y8z4" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y8z4.c",
  "north" : DIR+"/rooms/x57y9z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
