inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 46, 9 }));
  set_short( "Corridor - x61y46z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y47z9.c",
  "south" : DIR+"/rooms/x61y45z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
