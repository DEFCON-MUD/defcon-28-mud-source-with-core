inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 7 }));
  set_short( "Passage - x43y10z7" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y10z7.c",
  "north" : DIR+"/rooms/x43y11z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
