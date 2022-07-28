inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 5 }));
  set_short( "Corridor - x7y36z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y36z5.c",
  "north" : DIR+"/rooms/x7y37z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
