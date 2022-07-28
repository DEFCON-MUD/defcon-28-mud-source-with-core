inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 7 }));
  set_short( "Passage - x27y24z7" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y24z7.c",
  "north" : DIR+"/rooms/x27y25z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
