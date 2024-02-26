inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 48, 5 }));
  set_short( "Corridor - x8y48z5" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y48z5.c",
  "east" : DIR+"/rooms/x9y48z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
