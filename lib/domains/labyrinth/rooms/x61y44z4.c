inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 44, 4 }));
  set_short( "Hallway - x61y44z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y45z4.c",
  "south" : DIR+"/rooms/x61y43z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
