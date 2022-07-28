inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 4 }));
  set_short( "Passage - x13y52z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y52z4.c",
  "north" : DIR+"/rooms/x13y53z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
