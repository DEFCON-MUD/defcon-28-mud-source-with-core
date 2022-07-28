inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 45, 5 }));
  set_short( "Passage - x47y45z5" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y46z5.c",
  "south" : DIR+"/rooms/x47y44z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
