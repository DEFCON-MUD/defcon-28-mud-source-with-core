inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 6 }));
  set_short( "Corridor - x11y44z6" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y45z6.c",
  "south" : DIR+"/rooms/x11y43z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
