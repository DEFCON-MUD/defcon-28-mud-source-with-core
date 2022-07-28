inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 9, 4 }));
  set_short( "Hallway - x19y9z4" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y10z4.c",
  "south" : DIR+"/rooms/x19y8z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
