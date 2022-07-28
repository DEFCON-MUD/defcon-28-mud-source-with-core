inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 9 }));
  set_short( "Hallway - x27y32z9" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y32z9.c",
  "south" : DIR+"/rooms/x27y31z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
