inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 3, 9 }));
  set_short( "Hallway - x19y3z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y4z9.c",
  "south" : DIR+"/rooms/x19y2z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
