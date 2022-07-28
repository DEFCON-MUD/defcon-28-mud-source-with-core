inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 43, 2 }));
  set_short( "Hallway - x15y43z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y44z2.c",
  "south" : DIR+"/rooms/x15y42z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
