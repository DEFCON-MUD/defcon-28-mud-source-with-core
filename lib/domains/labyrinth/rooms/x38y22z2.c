inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 22, 2 }));
  set_short( "Corridor - x38y22z2" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y22z2.c",
  "east" : DIR+"/rooms/x39y22z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
