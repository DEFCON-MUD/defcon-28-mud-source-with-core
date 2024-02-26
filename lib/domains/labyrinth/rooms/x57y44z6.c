inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 44, 6 }));
  set_short( "Hallway - x57y44z6" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y44z6.c",
  "north" : DIR+"/rooms/x57y45z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
