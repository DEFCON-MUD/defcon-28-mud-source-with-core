inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 39, 7 }));
  set_short( "Corridor - x47y39z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y40z7.c",
  "south" : DIR+"/rooms/x47y38z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
