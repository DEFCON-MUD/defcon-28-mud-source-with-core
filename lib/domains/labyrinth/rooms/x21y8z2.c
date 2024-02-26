inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 2 }));
  set_short( "Corridor - x21y8z2" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "south" : DIR+"/rooms/x21y7z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
