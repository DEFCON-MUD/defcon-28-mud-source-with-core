inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 49, 7 }));
  set_short( "Hallway - x17y49z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y50z7.c",
  "south" : DIR+"/rooms/x17y48z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
