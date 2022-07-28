inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 37, 4 }));
  set_short( "Hallway - x19y37z4" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y38z4.c",
  "south" : DIR+"/rooms/x19y36z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
