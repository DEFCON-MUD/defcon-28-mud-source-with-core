inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 32, 9 }));
  set_short( "Corridor - x47y32z9" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y32z9.c",
  "south" : DIR+"/rooms/x47y31z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
