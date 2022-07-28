inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 13, 6 }));
  set_short( "Passage - x59y13z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y14z6.c",
  "south" : DIR+"/rooms/x59y12z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
