inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 9, 4 }));
  set_short( "Hallway - x53y9z4" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y10z4.c",
  "south" : DIR+"/rooms/x53y8z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
