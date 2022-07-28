inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 1 }));
  set_short( "Passage - x27y44z1" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y44z1.c",
  "south" : DIR+"/rooms/x27y43z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
