inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 46, 7 }));
  set_short( "Hallway - x23y46z7" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y46z7.c",
  "south" : DIR+"/rooms/x23y45z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
