inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 9 }));
  set_short( "Passage - x15y12z9" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y12z9.c",
  "north" : DIR+"/rooms/x15y13z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
