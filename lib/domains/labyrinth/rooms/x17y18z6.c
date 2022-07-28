inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 18, 6 }));
  set_short( "Corridor - x17y18z6" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y18z6.c",
  "east" : DIR+"/rooms/x18y18z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
