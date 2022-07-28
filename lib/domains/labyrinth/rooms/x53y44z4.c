inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 4 }));
  set_short( "Passage - x53y44z4" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y44z4.c",
  "north" : DIR+"/rooms/x53y45z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
