inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 51, 8 }));
  set_short( "Corridor - x7y51z8" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y52z8.c",
  "south" : DIR+"/rooms/x7y50z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
