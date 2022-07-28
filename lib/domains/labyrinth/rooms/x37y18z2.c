inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 18, 2 }));
  set_short( "Hallway - x37y18z2" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y19z2.c",
  "south" : DIR+"/rooms/x37y17z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
