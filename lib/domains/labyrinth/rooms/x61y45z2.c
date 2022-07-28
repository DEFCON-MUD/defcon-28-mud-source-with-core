inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 45, 2 }));
  set_short( "Passage - x61y45z2" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y46z2.c",
  "south" : DIR+"/rooms/x61y44z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
