inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 24, 5 }));
  set_short( "Corridor - x31y24z5" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y24z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
