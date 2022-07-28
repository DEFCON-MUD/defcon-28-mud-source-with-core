inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 42, 4 }));
  set_short( "Corridor - x13y42z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y43z4.c",
  "south" : DIR+"/rooms/x13y41z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
