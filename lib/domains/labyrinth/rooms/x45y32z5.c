inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 32, 5 }));
  set_short( "Hallway - x45y32z5" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y32z5.c",
  "north" : DIR+"/rooms/x45y33z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
