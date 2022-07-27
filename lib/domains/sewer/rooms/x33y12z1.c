inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 12, 1 }));
  set_short( "Passage - x33y12z1" );
set_objects( DIR+"/monsters/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y12z1.c",
  "east" : DIR+"/rooms/x34y12z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
