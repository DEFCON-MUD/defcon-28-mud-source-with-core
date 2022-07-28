inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 24, 0 }));
  set_short( "Corridor - x27y24z0" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y24z0.c",
  "south" : DIR+"/rooms/x27y23z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
