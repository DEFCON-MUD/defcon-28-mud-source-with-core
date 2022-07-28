inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 40, 6 }));
  set_short( "Passage - x17y40z6" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y40z6.c",
  "north" : DIR+"/rooms/x17y41z6.c",
  "south" : DIR+"/rooms/x17y39z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
